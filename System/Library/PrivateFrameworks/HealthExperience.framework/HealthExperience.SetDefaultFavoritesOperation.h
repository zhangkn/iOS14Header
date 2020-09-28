/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthExperience/HealthExperience.AsynchronousOperation.h>
#import <HealthExperience/HealthPlatform.FavoritesProviderObserver.h>

@interface HealthExperience.SetDefaultFavoritesOperation : HealthExperience.AsynchronousOperation <HealthPlatform.FavoritesProviderObserver> {

	 favoritesProvider;
	 healthStore;
	 precondition;
	 timeout;
	 $__lazy_storage_$_defaultFavoritablesProvider;
	 timeoutWork;

}
-(void)favoritesProviderIsReady:(id)arg1 ;
-(void)favoritesProviderDidUpdate:(id)arg1 ;
-(void)favoritesProviderDidUpdate:(id)arg1 specificType:(id)arg2 isFavorited:(BOOL)arg3 ;
-(id)init;
-(void)main;
@end
