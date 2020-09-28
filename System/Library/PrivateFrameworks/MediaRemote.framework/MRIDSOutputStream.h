/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class IDSService;

@interface MRIDSOutputStream : MRAVBufferedOutputStream {

	IDSService* _service;
	long long _type;

}
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)initWithService:(id)arg1 type:(long long)arg2 ;
-(BOOL)hasSpaceAvailable;
@end
