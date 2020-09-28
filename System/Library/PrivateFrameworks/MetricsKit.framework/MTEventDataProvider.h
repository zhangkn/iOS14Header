/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventDataProviderDelegate;
@class NSDictionary, NSArray;

@interface MTEventDataProvider : MTObject {

	id<MTEventDataProviderDelegate> _delegate;
	NSDictionary* _knownFieldMethods;
	NSArray* _additionalData;

}

@property (nonatomic,retain) NSDictionary * knownFieldMethods;                             //@synthesize knownFieldMethods=_knownFieldMethods - In the implementation block
@property (retain) NSArray * additionalData;                                               //@synthesize additionalData=_additionalData - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MTEventDataProviderDelegate>)arg1 ;
-(void)addFields:(id)arg1 ;
-(id<MTEventDataProviderDelegate>)delegate;
-(id)knownFields;
-(void)setAdditionalData:(NSArray *)arg1 ;
-(NSArray *)additionalData;
-(id)processMetricsData:(id)arg1 performanceData:(id)arg2 ;
-(id)flattenAdditionalData;
-(void)addFieldsWithDictionary:(id)arg1 ;
-(void)addFieldsWithPromise:(id)arg1 ;
-(id)knownFieldMethodsForKnownFields:(id)arg1 ;
-(SEL)knownFieldAccessorForFieldName:(id)arg1 ;
-(NSDictionary *)knownFieldMethods;
-(void)addFieldsWithBlock:(/*^block*/id)arg1 ;
-(void)setKnownFieldMethods:(NSDictionary *)arg1 ;
@end
