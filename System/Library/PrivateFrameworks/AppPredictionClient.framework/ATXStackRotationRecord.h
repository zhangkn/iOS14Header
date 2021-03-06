/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, INIntent, NSDate;

@interface ATXStackRotationRecord : NSObject {

	BOOL _isStalenessRotation;
	NSString* _infoSuggestionId;
	NSString* _clientModelId;
	NSString* _criterion;
	NSString* _extensionBundleId;
	NSString* _widgetKind;
	INIntent* _intent;
	NSDate* _rotationDate;
	double _durationLimit;
	double _coolDownInterval;

}

@property (nonatomic,readonly) NSString * infoSuggestionId;               //@synthesize infoSuggestionId=_infoSuggestionId - In the implementation block
@property (nonatomic,readonly) NSString * clientModelId;                  //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) NSString * criterion;                      //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,readonly) NSString * extensionBundleId;              //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,readonly) NSString * widgetKind;                     //@synthesize widgetKind=_widgetKind - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                         //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) BOOL isStalenessRotation;                  //@synthesize isStalenessRotation=_isStalenessRotation - In the implementation block
@property (nonatomic,readonly) NSDate * rotationDate;                     //@synthesize rotationDate=_rotationDate - In the implementation block
@property (nonatomic,readonly) double durationLimit;                      //@synthesize durationLimit=_durationLimit - In the implementation block
@property (nonatomic,readonly) double coolDownInterval;                   //@synthesize coolDownInterval=_coolDownInterval - In the implementation block
-(NSString *)extensionBundleId;
-(NSString *)clientModelId;
-(NSString *)widgetKind;
-(INIntent *)intent;
-(id)init;
-(NSString *)criterion;
-(id)initWithInfoSuggestionId:(id)arg1 clientModelId:(id)arg2 criterion:(id)arg3 widget:(id)arg4 kind:(id)arg5 intent:(id)arg6 isStalenessRotation:(BOOL)arg7 rotationDate:(id)arg8 durationLimit:(double)arg9 coolDownInterval:(double)arg10 ;
-(NSString *)infoSuggestionId;
-(BOOL)isStalenessRotation;
-(NSDate *)rotationDate;
-(double)durationLimit;
-(double)coolDownInterval;
@end

