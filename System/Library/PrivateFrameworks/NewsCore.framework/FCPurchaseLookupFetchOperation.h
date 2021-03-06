/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@class NSArray, FCPurchaseLookupRecordSource;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation {

	NSArray* _purchaseIDs;
	FCPurchaseLookupRecordSource* _purchaseLookupRecordSource;

}

@property (nonatomic,retain) NSArray * purchaseIDs;                                                  //@synthesize purchaseIDs=_purchaseIDs - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupRecordSource * purchaseLookupRecordSource;              //@synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource - In the implementation block
-(void)performOperation;
-(id)processFetchedResults:(id)arg1 ;
-(NSArray *)purchaseIDs;
-(FCPurchaseLookupRecordSource *)purchaseLookupRecordSource;
-(id)init;
-(id)initWithPurchaseIDs:(id)arg1 purchaseLookupRecordSource:(id)arg2 ;
-(id)_prefixedPurchasedIDs:(id)arg1 ;
-(void)setPurchaseLookupRecordSource:(FCPurchaseLookupRecordSource *)arg1 ;
-(void)setPurchaseIDs:(NSArray *)arg1 ;
@end

