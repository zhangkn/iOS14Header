/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>
#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class NSArray, SKUICarouselViewElement, NSString;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {

	NSArray* _carouselItems;
	double _cycleInterval;
	long long _missingItemCount;

}

@property (nonatomic,readonly) NSArray * carouselItems;                            //@synthesize carouselItems=_carouselItems - In the implementation block
@property (nonatomic,readonly) SKUICarouselViewElement * viewElement; 
@property (nonatomic,readonly) double cycleInterval;                               //@synthesize cycleInterval=_cycleInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueForMetricsField:(id)arg1 ;
-(long long)componentType;
-(id)initWithViewElement:(id)arg1 ;
-(id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2 ;
-(void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isMissingItemData;
-(id)metricsElementName;
-(void)updateWithMissingItems:(id)arg1 ;
-(NSArray *)carouselItems;
-(double)cycleInterval;
@end
