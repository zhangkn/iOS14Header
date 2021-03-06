/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLModel;

@interface MLModelVisionFeaturePrintInfo : NSObject {

	unsigned long long _version;
	id _featureExtractorParameters;
	MLModel* _postVisionFeaturePrintModel;

}

@property (nonatomic,retain) id featureExtractorParameters;                      //@synthesize featureExtractorParameters=_featureExtractorParameters - In the implementation block
@property (assign,nonatomic) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) MLModel * postVisionFeaturePrintModel;              //@synthesize postVisionFeaturePrintModel=_postVisionFeaturePrintModel - In the implementation block
-(unsigned long long)version;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)featureExtractorParameters;
-(void)setFeatureExtractorParameters:(id)arg1 ;
-(MLModel *)postVisionFeaturePrintModel;
-(void)setPostVisionFeaturePrintModel:(MLModel *)arg1 ;
@end

