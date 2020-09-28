/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXDOMObjectProviding, SXTextComponentLayoutHosting, SXDataTableTextSourceFactory, SXDataRecordValueTransformerFactory;
@class NSString;

@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXDataTableTextSourceFactory> _textSourceFactory;
	id<SXDataRecordValueTransformerFactory> _recordValueTransformerFactory;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;                                         //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;                        //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,readonly) id<SXDataTableTextSourceFactory> textSourceFactory;                                 //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (nonatomic,readonly) id<SXDataRecordValueTransformerFactory> recordValueTransformerFactory;              //@synthesize recordValueTransformerFactory=_recordValueTransformerFactory - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 recordValueTransformerFactory:(id)arg4 ;
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4 ;
-(int)role;
-(NSString *)type;
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXDataTableTextSourceFactory>)textSourceFactory;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id<SXDataRecordValueTransformerFactory>)recordValueTransformerFactory;
@end
