/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol HealthPlatform.FavoritesProviding
@property (readonly,nonatomic) NSSet * favorites; 
@property (readonly,nonatomic) BOOL isReady; 
@property (readonly,nonatomic) BOOL isCycleTrackingFavorited; 
@required
-(BOOL)isReady;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSSet *)favorites;
-(BOOL)isFavoriteWithObject:(id)arg1;
-(BOOL)isCycleTrackingFavorited;

@end
