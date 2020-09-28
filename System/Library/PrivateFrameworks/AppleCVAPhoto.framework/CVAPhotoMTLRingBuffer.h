/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
@interface CVAPhotoMTLRingBuffer : NSObject {

	array<id<MTLBuffer>, 3> _buffers;
	unsigned long long _index;

}
-(id)getBufferAt:(unsigned long long)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 device:(id)arg4 ;
-(id)currentBuffer;
-(id)advancedBuffer;
@end
