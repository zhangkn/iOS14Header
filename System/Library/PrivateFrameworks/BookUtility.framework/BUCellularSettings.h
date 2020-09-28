/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BUCellularSettings : NSObject {

	NSString* _defaultsKey;

}

@property (assign,nonatomic) BOOL allowAutomaticDownloads; 
@property (nonatomic,readonly) BOOL legacyAllowAutomaticDownloads; 
@property (assign,nonatomic) long long cellularDataPrompt; 
+(id)settingsForIdentity:(id)arg1 ;
+(BOOL)shouldShowCellularAutomaticDownloadsSwitch;
+(id)_copyValueForCarrierBundleKey:(id)arg1 ;
-(id)_cellularSettings;
-(BOOL)allowAutomaticDownloads;
-(void)setAllowAutomaticDownloads:(BOOL)arg1 ;
-(long long)cellularDataPrompt;
-(void)setCellularDataPrompt:(long long)arg1 ;
-(id)initWithDefaultsKey:(id)arg1 ;
-(BOOL)legacyAllowAutomaticDownloads;
@end
