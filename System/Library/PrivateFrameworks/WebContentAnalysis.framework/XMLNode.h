/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@interface XMLNode : NSObject {

	xmlNode* _xmlNode;

}
+(id)stringValueForAttribute:(id)arg1 inNode:(xmlNode*)arg2 ;
+(id)getJavascriptFromNode:(xmlNode*)arg1 ;
-(id)initWithNode:(xmlNode*)arg1 ;
-(void)dealloc;
-(xmlNode*)xmlNode;
-(void)setXmlNode:(xmlNode*)arg1 ;
-(id)_stringValueFromAttribute:(id)arg1 ;
-(long long)_intValueFromAttribute:(id)arg1 ;
@end

