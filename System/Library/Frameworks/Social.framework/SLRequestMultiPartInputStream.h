/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInputStream.h>

@class SLRequestMultiPart, NSData;

@interface SLRequestMultiPartInputStream : NSInputStream {

	SLRequestMultiPart* _multiPart;
	unsigned long long _streamStatus;
	unsigned long long _bytesReadInState;
	unsigned long long _totalBytesRead;
	NSData* _srcData;
	int _currentState;

}
-(void)open;
-(void)close;
-(BOOL)hasBytesAvailable;
-(unsigned long long)length;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)transitionState;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(unsigned long long)readStateSourceData:(id)arg1 toBuffer:(char*)arg2 offset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 ;
-(long long)currentStateRead:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithMultiPart:(id)arg1 ;
@end

