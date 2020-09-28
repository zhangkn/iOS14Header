/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/MultitouchSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTBinaryFilterProtocol <NSObject>
@property (nonatomic,readonly) unsigned maxFrameSize; 
@optional
-(id)initWithInfo:(id)arg1;
-(id)initWithInfo:(id)arg1 getProperty:(/*^block*/id)arg2;

@required
-(unsigned)maxFrameSize;
-(void)reset;
-(void)filterFrame:(char**)arg1 size:(unsigned*)arg2 maxSize:(unsigned*)arg3 extraFrame:(/*^block*/id)arg4;

@end
