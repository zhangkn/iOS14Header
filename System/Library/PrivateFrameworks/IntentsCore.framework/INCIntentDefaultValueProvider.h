/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class INIntent;

@interface INCIntentDefaultValueProvider : NSObject {

	INIntent* _intent;

}

@property (nonatomic,copy,readonly) INIntent * intent;              //@synthesize intent=_intent - In the implementation block
-(id)initWithIntent:(id)arg1 ;
-(INIntent *)intent;
-(void)loadDefaultValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadDefaultValuesWithAttributes:(id)arg1 extensionProxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isExpectedDefaultValueError:(id)arg1 ;
@end
