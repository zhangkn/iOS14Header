/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTPAFPlaylist, MTPAFKit;

@interface MTPAFPlaylistKitBinding : NSObject {

	MTPAFPlaylist* _playlist;
	MTPAFKit* _pafKit;

}

@property (nonatomic,retain) MTPAFPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MTPAFKit * pafKit;                     //@synthesize pafKit=_pafKit - In the implementation block
-(MTPAFKit *)pafKit;
-(MTPAFPlaylist *)playlist;
-(void)setPlaylist:(MTPAFPlaylist *)arg1 ;
-(void)setPafKit:(MTPAFKit *)arg1 ;
@end
