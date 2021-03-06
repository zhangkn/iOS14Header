/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDateFormatter_NSFormatter : NSFormatter {

	NSString* mPreferredFormat;
	BOOL isDateOnly;
	BOOL isTimeOnly;

}

@property (nonatomic,retain) NSString * preferredFormat; 
@property (assign,nonatomic) BOOL isDateOnly; 
@property (assign,nonatomic) BOOL isTimeOnly; 
-(id)stringForObjectValue:(id)arg1 ;
-(NSString *)preferredFormat;
-(void)dealloc;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(BOOL)isDateOnly;
-(BOOL)isTimeOnly;
-(void)setIsDateOnly:(BOOL)arg1 ;
-(void)setIsTimeOnly:(BOOL)arg1 ;
@end

