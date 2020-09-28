/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController {

	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
+(void)presentInViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)needsRequestedPermission;
-(void)setCompletion:(id)arg1 ;
-(void)viewDidLoad;
-(id)completion;
-(BOOL)shouldInlineButtonTray;
-(void)_showDataCollectionAdditionalInfo;
-(void)_enableDataCollection;
-(void)_disableDataCollection;
@end
