/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLTransformerProtocol.h>

@class NSArray, NSString;

@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol> {

	NSArray* _transformers;

}

@property (retain) NSArray * transformers;                          //@synthesize transformers=_transformers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withTransformers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)transformers;
-(id)transform:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2 ;
-(id)initWithTransformers:(id)arg1 ;
-(BOOL)isEqualToPipelineTransformer:(id)arg1 ;
-(void)setTransformers:(NSArray *)arg1 ;
@end

