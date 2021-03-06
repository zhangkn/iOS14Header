/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGPipelineDissector.h>
#import <libobjc.A.dylib/SGMailMessageProcessing.h>
#import <libobjc.A.dylib/SGTextMessageProcessing.h>

@class SGDetectedAttributeML, SGQuickResponsesML, SGContactPipelineHelper, SGHKHealthStore, NSSet, NSString;

@interface SGDetectedAttributeDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {

	SGDetectedAttributeML* _ml;
	SGQuickResponsesML* _mlQR;
	SGContactPipelineHelper* _contactsHelper;
	SGHKHealthStore* _healthStore;
	BOOL _filterWithAddressBook;
	float _unlikelyPhoneSamplingRate;
	NSSet* _hmmTrustedLanguages;
	NSSet* _ddTrustedLanguages;
	NSSet* _coreNLPTrustedLanguages;
	unsigned long long _selfIdentificationMessageCount;

}

@property (assign,nonatomic) unsigned long long selfIdentificationMessageCount;              //@synthesize selfIdentificationMessageCount=_selfIdentificationMessageCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_logSelfIDForMessage:(id)arg1 detection:(id)arg2 modelType:(SGMSelfIdModelType_)arg3 modelVersion:(unsigned long long)arg4 ;
+(BOOL)isPhoneContext:(id)arg1 ;
+(BOOL)isBirthdayContext:(id)arg1 ;
+(id)patterns;
+(BOOL)isAddressContext:(id)arg1 ;
+(BOOL)isNameRequest:(id)arg1 ;
+(id)dissectorWithMockedMLTrainingForTests;
+(BOOL)isTwoPersonConversation:(id)arg1 ;
+(id)currentPatterns;
+(void)clearConversationCache;
+(BOOL)isMaybeNameContext:(id)arg1 ;
-(id)filterDangerousSigEmailDetections:(id)arg1 message:(id)arg2 ;
-(unsigned long long)selfIdentificationMessageCount;
-(id)getLineContaining:(NSRange)arg1 inText:(id)arg2 ;
-(id)_extractEmailishTokenFromMailHeader:(id)arg1 ;
-(id)_makeSimplifiedListIdEmail:(id)arg1 ;
-(id)detectionFromBodyDDMatch:(id)arg1 message:(id)arg2 withSupervisionToFill:(id)arg3 isUnlikelyPhone:(BOOL)arg4 ;
-(id)detectionFromSignatureDDMatch:(id)arg1 message:(id)arg2 detectedLabelRange:(NSRange*)arg3 lastClaimedLabelRange:(NSRange)arg4 isUnlikelyPhone:(BOOL)arg5 ;
-(void)setSelfIdentificationMessageCount:(unsigned long long)arg1 ;
-(id)processTextMessageConversation:(id)arg1 threadLength:(unsigned long long)arg2 ;
-(void)_dissectMessage:(id)arg1 entity:(id)arg2 ;
-(void)handleTextMessageBirthdayCongratulation:(id)arg1 entity:(id)arg2 withConversationHistory:(id)arg3 ;
-(id)init;
-(id)filterDangerousSigDetections:(id)arg1 message:(id)arg2 ;
-(void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)detailTypeFromPrefix:(id)arg1 ;
-(void)_removeUnwantedContactDetails:(id)arg1 entity:(id)arg2 ;
-(void)logBirthdayExtractionMetricForPerson:(id)arg1 forDate:(id)arg2 isFromCongratulation:(unsigned char)arg3 withModelVersion:(id)arg4 didRegexTrigger:(unsigned char)arg5 ;
-(id)filterDangerousSigPhoneDetections:(id)arg1 message:(id)arg2 ;
-(void)_addAuthorContactForMessage:(id)arg1 entity:(id)arg2 ;
-(void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3 ;
-(id)detailTypeFromPrefix:(id)arg1 detectedLabelPointer:(NSRange*)arg2 ;
-(void)handleTextMessageSelfIdentification:(id)arg1 entity:(id)arg2 withConversationHistory:(id)arg3 ;
-(id)filterDangerousSigAddressDetections:(id)arg1 ;
-(id)initWithML:(id)arg1 withMLQR:(id)arg2 andHealthStore:(id)arg3 ;
-(id)_makeAlnum:(id)arg1 ;
@end

