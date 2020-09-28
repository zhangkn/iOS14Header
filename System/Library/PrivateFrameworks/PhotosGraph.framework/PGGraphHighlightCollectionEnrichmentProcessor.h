/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@class NSDictionary, NSString;

@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {

	NSDictionary* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundJobName;
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
-(id)initWithOptions:(id)arg1 ;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_enrichYearHighlights:(id)arg1 monthsHighlights:(id)arg2 withManager:(id)arg3 enrichmentprogressBlock:(/*^block*/id)arg4 ;
@end
