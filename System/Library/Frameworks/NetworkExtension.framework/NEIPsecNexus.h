/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEInternetNexus.h>

@class NSArray;

@interface NEIPsecNexus : NEInternetNexus {

	NSArray* _nexusInstances;

}

@property (nonatomic,retain) NSArray * nexusInstances;              //@synthesize nexusInstances=_nexusInstances - In the implementation block
-(id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(BOOL)arg3 ;
-(BOOL)setDefaultInputHandler:(nw_protocol*)arg1 ;
-(void)setRemotePacketProxy:(id)arg1 ;
-(void)setNexusInstances:(NSArray *)arg1 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned)arg3 ;
-(id)initWithName:(id)arg1 delegate:(id)arg2 enableWithChannelCount:(unsigned)arg3 netifRingSize:(unsigned)arg4 kernelPipeTxRingSize:(unsigned)arg5 kernelPipeRxRingSize:(unsigned)arg6 ;
-(NSArray *)nexusInstances;
@end

