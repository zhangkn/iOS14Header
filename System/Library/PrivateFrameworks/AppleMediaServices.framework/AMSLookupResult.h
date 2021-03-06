/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLResult.h>

@class NSDictionary, NSDate, NSArray;

@interface AMSLookupResult : AMSURLResult {

	NSDictionary* _response;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSArray * allItems; 
-(NSArray *)allItems;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(id)valueForProperty:(id)arg1 ;
-(void)_enumerateItemsWithBlock:(/*^block*/id)arg1 ;
-(id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2 ;
-(id)initWithResult:(id)arg1 dictionary:(id)arg2 ;
-(id)itemForKey:(id)arg1 ;
@end

