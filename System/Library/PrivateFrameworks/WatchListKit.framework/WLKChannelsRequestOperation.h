/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKChannelsResponse, NSString;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation {

	BOOL _filtered;
	WLKChannelsResponse* _channelsResponse;
	NSString* _caller;

}

@property (nonatomic,copy) NSString * caller;                                     //@synthesize caller=_caller - In the implementation block
@property (assign,nonatomic) BOOL filtered;                                       //@synthesize filtered=_filtered - In the implementation block
@property (nonatomic,retain) WLKChannelsResponse * channelsResponse;              //@synthesize channelsResponse=_channelsResponse - In the implementation block
-(void)setCaller:(NSString *)arg1 ;
-(NSString *)caller;
-(BOOL)filtered;
-(void)setFiltered:(BOOL)arg1 ;
-(void)processResponse;
-(id)initWithCaller:(id)arg1 ;
-(id)initWithCaller:(id)arg1 filtered:(BOOL)arg2 ;
-(void)setChannelsResponse:(WLKChannelsResponse *)arg1 ;
-(WLKChannelsResponse *)channelsResponse;
@end

