#include "ringBuffer.h"

/******************************************************************************环形缓冲区**************************************************************************************/
/*初始化环形缓冲区*/
void RingBuffer_Init(_RingBuffer *ringbuffer)
{
	ringbuffer->Head   = 0;
	ringbuffer->Tail   = 0;
	ringbuffer->Lenght = 0;
	for(int i=0;i<RINGBUFF_LEN;i++)
	{
		ringbuffer->RingBufferData[i] = '\0';
	}
}
/*缓冲区写入一个字节*/
unsigned char WriteOneByte_RingBuffer(_RingBuffer *ringbuffer, unsigned char OneByteData)
{
    if(ringbuffer->Lenght >= RINGBUFF_LEN)
    {
        return RINGBUFF_ERR;/*缓冲区数据满了*/
    }
    ringbuffer->RingBufferData[ringbuffer->Tail] = OneByteData;/*缓冲区写入一个数据*/

    ringbuffer->Tail = (ringbuffer->Tail +1) % RINGBUFF_LEN;

    ringbuffer->Lenght += 1;

    return RINGBUFF_OK;
}
/*缓冲区写入多个字节*/
unsigned char WriteBytes(_RingBuffer *ringbuffer, unsigned char *Bytes,unsigned short DataLen)
{
    if(ringbuffer->Lenght >= RINGBUFF_LEN)
    {
        return RINGBUFF_ERR;/*缓冲区数据满了*/
    }

    for (int i = 0; i < DataLen; i++)
    {
        WriteOneByte_RingBuffer(ringbuffer,Bytes[i]);
    }
    return RINGBUFF_OK;
}

unsigned char ReadOneByte_RingBuffer(_RingBuffer *ringbuffer,unsigned char *OneByteData)
{
    if(ringbuffer->Lenght == 0)
    {
        return RINGBUFF_ERR;/*缓冲区为空*/
    }
    *OneByteData = ringbuffer->RingBufferData[ringbuffer->Head];/*缓冲区读取一个字节*/

    ringbuffer->Head = (ringbuffer->Head + 1) % RINGBUFF_LEN;

    ringbuffer->Lenght -= 1;

    return RINGBUFF_OK;
}

unsigned char ReadBytes(_RingBuffer *ringbuffer,unsigned char *ReadBuffer, unsigned short Len)
{
    if(Len > ringbuffer->Lenght || ringbuffer->Lenght == 0)
    {
        return 0;           /*读取的数据大于缓冲区的数据,或者缓冲区无数据，返回空数据*/
    }

    for(int i=0;i<Len;i++)
    {
        ReadOneByte_RingBuffer(ringbuffer,&ReadBuffer[i]);
    }
		return 1;
}

unsigned short GetDataLength(unsigned char *DataBuffer)
{
	unsigned short DataLen = 0;
	while(DataBuffer[DataLen] != '\0')
	{
		DataLen++;
	}
	return DataLen;
}


