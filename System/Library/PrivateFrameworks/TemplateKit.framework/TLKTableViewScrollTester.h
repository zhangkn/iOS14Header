/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableView;

@interface TLKTableViewScrollTester : NSObject {

	BOOL _directionUp;
	BOOL _finishedFirstScroll;
	double _scrollTime;
	/*^block*/id _completion;
	/*^block*/id _firstScroll;
	UITableView* _tableView;
	double _startTime;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id firstScroll;                          //@synthesize firstScroll=_firstScroll - In the implementation block
@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL directionUp;                      //@synthesize directionUp=_directionUp - In the implementation block
@property (assign,nonatomic) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL finishedFirstScroll;              //@synthesize finishedFirstScroll=_finishedFirstScroll - In the implementation block
@property (assign,nonatomic) double scrollTime;                     //@synthesize scrollTime=_scrollTime - In the implementation block
-(void)fire:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setScrollTime:(double)arg1 ;
-(void)performScrollTestOnTableView:(id)arg1 firstScroll:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFinishedFirstScroll:(BOOL)arg1 ;
-(void)setFirstScroll:(id)arg1 ;
-(double)scrollTime;
-(void)finishFirstScrollIfNeeded;
-(BOOL)directionUp;
-(void)setDirectionUp:(BOOL)arg1 ;
-(BOOL)finishedFirstScroll;
-(id)firstScroll;
-(void)performScrollTestOnTableView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCompletion:(id)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)completion;
-(id)init;
@end
