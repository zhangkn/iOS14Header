/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSAttributedString, NSArray, NSString;

@interface CKAttributedStringItemProvider : NSObject <NSItemProviderWriting> {

	NSAttributedString* _attributedString;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;                              //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writableTypeIdentifiersForItemProvider;
-(id)initWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
@end
