/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIResponseKitTrainer.h>

@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>
+(id)sharedTrainer;
-(void)performTrainingForClient:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_init;
-(BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
@end

