/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:16 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PMLMultiLabelClassifierProtocol, PMLTransformerProtocol;
@class SGModelSource, NSString;

@interface SGModel : NSObject {

	id<PMLMultiLabelClassifierProtocol> _model;
	id<PMLTransformerProtocol> _featurizer;
	SGModelSource* _modelSource;
	NSString* _locale;

}

@property (readonly) id<PMLMultiLabelClassifierProtocol> model;              //@synthesize model=_model - In the implementation block
@property (readonly) id<PMLTransformerProtocol> featurizer;                  //@synthesize featurizer=_featurizer - In the implementation block
@property (readonly) SGModelSource * modelSource;                            //@synthesize modelSource=_modelSource - In the implementation block
@property (copy,readonly) NSString * locale;                                 //@synthesize locale=_locale - In the implementation block
+(id)trainingFeaturesOf:(id)arg1 inLanguage:(id)arg2 ;
+(id)transformerInstanceForLanguage:(id)arg1 ;
+(id)transformerInstanceForLanguage:(id)arg1 withObjective:(unsigned long long)arg2 ;
+(Class)modelClassForObjective:(unsigned long long)arg1 ;
+(id)trainingFeaturesOf:(id)arg1 inLanguage:(id)arg2 withObjective:(unsigned long long)arg3 ;
+(id)newTransformerInstanceForLanguage:(id)arg1 ;
+(id)featurize:(id)arg1 ;
-(NSString *)locale;
-(id<PMLMultiLabelClassifierProtocol>)model;
-(id)initWithModel:(id)arg1 locale:(id)arg2 featurizer:(id)arg3 modelSource:(id)arg4 ;
-(id)predictForInput:(id)arg1 ;
-(id)trainingFeaturesOf:(id)arg1 ;
-(id<PMLTransformerProtocol>)featurizer;
-(SGModelSource *)modelSource;
@end

