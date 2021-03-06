/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {

	SCD_Struct_NS62 _details;
	NSObject* _originalObservable;
	BOOL _isPriorNotification;
	BOOL _isRetainingObjects;

}
-(void)dealloc;
-(void)retainObjects;
-(id)keyEnumerator;
-(unsigned long long)count;
-(id)initWithDetailsNoCopy:(SCD_Struct_NS63)arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3 ;
-(void)setOriginalObservable:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setDetailsNoCopy:(SCD_Struct_NS63)arg1 originalObservable:(id)arg2 ;
@end

