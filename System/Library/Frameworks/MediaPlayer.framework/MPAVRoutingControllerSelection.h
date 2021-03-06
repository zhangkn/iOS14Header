/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPAVRoutingControllerSelection : NSObject {

	NSArray* _routes;
	long long _selectionOperation;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSArray * routes;                          //@synthesize routes=_routes - In the implementation block
@property (assign,nonatomic) long long selectionOperation;              //@synthesize selectionOperation=_selectionOperation - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
-(void)setRoutes:(NSArray *)arg1 ;
-(long long)selectionOperation;
-(void)setSelectionOperation:(long long)arg1 ;
-(id)initWithRoutes:(id)arg1 selectionOperation:(long long)arg2 ;
-(NSArray *)routes;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)description;
@end

