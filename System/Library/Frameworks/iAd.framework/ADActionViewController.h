/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ADActionViewControllerInterface.h>

@class ADAdSpace, NSString;

@interface ADActionViewController : UIViewController <ADActionViewControllerInterface> {

	BOOL _readyForPresentation;
	ADAdSpace* _adSpace;

}

@property (assign,nonatomic,__weak) ADAdSpace * adSpace;               //@synthesize adSpace=_adSpace - In the implementation block
@property (nonatomic,readonly) BOOL readyForPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestActionViewControllerForAdSpace:(id)arg1 ;
+(void)cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
-(void)loadView;
-(ADAdSpace *)adSpace;
-(void)dismiss;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(void)setReadyForPresentation:(BOOL)arg1 ;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;
-(void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)arg1 ;
@end
