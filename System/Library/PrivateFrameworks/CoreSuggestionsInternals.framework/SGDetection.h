/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, SGExtractionInfo;

@interface SGDetection : NSObject {

	BOOL _hasPhoneLabel;
	BOOL _isUnlikelyPhone;
	unsigned _type;
	NSString* _extraction;
	NSString* _context;
	NSString* _label;
	SGExtractionInfo* _extractionInfo;
	NSRange _contextRangeOfInterest;
	NSRange _match;

}

@property (nonatomic,readonly) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * extraction;                          //@synthesize extraction=_extraction - In the implementation block
@property (nonatomic,readonly) NSString * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSRange contextRangeOfInterest;                 //@synthesize contextRangeOfInterest=_contextRangeOfInterest - In the implementation block
@property (nonatomic,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneLabel;                             //@synthesize hasPhoneLabel=_hasPhoneLabel - In the implementation block
@property (nonatomic,readonly) NSRange match;                                  //@synthesize match=_match - In the implementation block
@property (nonatomic,readonly) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
@property (nonatomic,readonly) BOOL isUnlikelyPhone;                           //@synthesize isUnlikelyPhone=_isUnlikelyPhone - In the implementation block
+(id)detectionWithType:(unsigned)arg1 text:(id)arg2 matchRange:(NSRange)arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 extractionInfo:(id)arg7 isUnlikelyPhone:(BOOL)arg8 ;
-(NSRange)match;
-(SGExtractionInfo *)extractionInfo;
-(unsigned)type;
-(NSString *)context;
-(NSString *)label;
-(id)description;
-(BOOL)isUnlikelyPhone;
-(id)initWithType:(unsigned)arg1 extraction:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 match:(NSRange)arg7 extractionInfo:(id)arg8 isUnlikelyPhone:(BOOL)arg9 ;
-(NSString *)extraction;
-(NSRange)contextRangeOfInterest;
-(BOOL)hasPhoneLabel;
@end

