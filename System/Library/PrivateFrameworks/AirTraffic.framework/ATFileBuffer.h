/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle;

@interface ATFileBuffer : NSObject {

	NSFileHandle* _bufferFileHandle;
	unsigned long long _currentReadLocation;
	unsigned long long _length;

}
-(void)appendData:(id)arg1 ;
-(unsigned long long)length;
-(void)rewindData:(id)arg1 ;
-(void)rewind:(unsigned long long)arg1 ;
-(id)init;
-(id)readDataOfLength:(unsigned long long)arg1 ;
@end

