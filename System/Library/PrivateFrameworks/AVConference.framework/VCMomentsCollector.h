/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMomentsCollectorDelegate.h>

@class VCMoments, NSString;

@interface VCMomentsCollector : NSObject <VCMomentsCollectorDelegate> {

	long long _streamToken;
	VCMoments* _moments;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cleanupActiveRequests;
-(id)initWithStreamToken:(long long)arg1 ;
-(void)stream:(id)arg1 addAudioSampleBuffer:(opaqueVCAudioBufferListRef)arg2 timestamp:(unsigned)arg3 ;
-(void)stream:(id)arg1 addVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned)arg4 ;
@end

