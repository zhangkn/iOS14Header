/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthToolbox/WDStoredDataByCategoryViewController.h>

@class HKSource;

@interface WDSourceStoredDataViewController : WDStoredDataByCategoryViewController {

	HKSource* _source;

}

@property (nonatomic,readonly) BOOL sourceIsInstalled; 
@property (nonatomic,readonly) BOOL sourceHasData; 
@property (nonatomic,retain) HKSource * source;                     //@synthesize source=_source - In the implementation block
-(void)setSource:(HKSource *)arg1 ;
-(HKSource *)source;
-(id)storedDataPredicate;
-(id)storedDataDisplayName;
-(BOOL)shouldShowDeleteAllDataButton;
-(void)deleteAllStoredData;
-(BOOL)sourceHasData;
-(BOOL)sourceIsInstalled;
-(void)deleteSource;
-(void)deleteAllSourceData;
@end

