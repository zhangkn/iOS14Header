/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDServerUIFieldExtractor.h>

@class RUIObjectModel, NSString;

@interface AKAppleIDObjectModelFieldExtractor : NSObject <AKAppleIDServerUIFieldExtractor> {

	RUIObjectModel* _objectModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObjectModel:(id)arg1 ;
-(id)_valueForFieldWithID:(id)arg1 inObjectModel:(id)arg2 ;
-(id)_valueForTextFieldFromPage:(id)arg1 rowID:(id)arg2 ;
-(id)valueForFieldWithID:(id)arg1 ;
@end

