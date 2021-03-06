/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class CKShareMetadata;

@interface UIHandleCloudKitShareAction : BSAction {

	CKShareMetadata* _cachedMetadata;

}

@property (nonatomic,readonly) CKShareMetadata * shareMetadata; 
+(void)loadCloudKitFramework;
+(id)cloudKitShareActionWithShareMetadata:(id)arg1 ;
-(id)data;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithShareMetadata:(id)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(long long)UIActionType;
@end

