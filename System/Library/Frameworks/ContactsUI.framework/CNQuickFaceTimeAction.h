/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickPropertyAction.h>

@interface CNQuickFaceTimeAction : CNQuickPropertyAction {

	BOOL _audioOnly;

}

@property (assign,nonatomic) BOOL audioOnly;              //@synthesize audioOnly=_audioOnly - In the implementation block
+(id)defaultFaceTimeTitle;
+(id)defaultFaceTimeAudioTitle;
-(id)identifier;
-(unsigned long long)score;
-(id)category;
-(BOOL)audioOnly;
-(id)_coreDuetValue;
-(id)_coreDuetInteractionMechanisms;
-(id)titleForContext:(long long)arg1 ;
-(id)subtitleForContext:(long long)arg1 ;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAudioOnly:(BOOL)arg1 ;
@end
