/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/_UICloudSharingControllerDelegate_Internal.h>
#import <libobjc.A.dylib/_UIDocumentSharingControllerDelegate_Private.h>

@class NSString, UIViewController, UIImage;

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {

	NSString* _activityTitle;
	UIViewController* _activityViewController;
	BOOL _initialSharing;
	UIImage* _activityImage;

}

@property (nonatomic,retain) UIViewController * activityViewController; 
@property (nonatomic,retain) NSString * activityTitle;                               //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) UIImage * activityImage;                                //@synthesize activityImage=_activityImage - In the implementation block
@property (assign,nonatomic) BOOL initialSharing;                                    //@synthesize initialSharing=_initialSharing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(void)setInitialSharing:(BOOL)arg1 ;
-(id)_systemImageName;
-(BOOL)eligibleTypeForActivity:(id)arg1 ;
-(void)_documentSharingControllerDidDismiss:(id)arg1 ;
-(UIViewController *)activityViewController;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)_setupForInitialSharing;
-(BOOL)_isURLEligibleForSharing:(id)arg1 isInitial:(BOOL*)arg2 ;
-(void)_setupForSharingInfo;
-(NSString *)activityTitle;
-(UIImage *)activityImage;
-(void)_cloudShareControllerDidDismiss:(id)arg1 ;
-(BOOL)_activitySupportsPromiseURLs;
-(void)setActivityTitle:(NSString *)arg1 ;
-(void)performActivity;
-(void)setActivityImage:(UIImage *)arg1 ;
-(BOOL)initialSharing;
@end

