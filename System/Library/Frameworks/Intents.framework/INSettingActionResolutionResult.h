/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>

@interface INSettingActionResolutionResult : INIntentResolutionResult
+(id)successWithResolvedSettingAction:(long long)arg1 ;
+(id)confirmationRequiredWithSettingActionToConfirm:(long long)arg1 ;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
