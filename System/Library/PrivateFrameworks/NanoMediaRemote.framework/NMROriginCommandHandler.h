/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NMROrigin;


@protocol NMROriginCommandHandler <NSObject>
@property (nonatomic,readonly) NMROrigin * origin; 
@required
-(NMROrigin *)origin;
-(void)sendMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 userInitiated:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

