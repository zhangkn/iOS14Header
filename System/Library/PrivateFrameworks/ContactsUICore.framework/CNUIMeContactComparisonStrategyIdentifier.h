/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMeContactComparisonStrategy.h>

@class NSString;

@interface CNUIMeContactComparisonStrategyIdentifier : NSObject <CNMeContactComparisonStrategy> {

	NSString* _meContactIdentifierFound;

}

@property (nonatomic,retain) NSString * meContactIdentifierFound;              //@synthesize meContactIdentifierFound=_meContactIdentifierFound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isMeContact:(id)arg1 ;
-(id)meContactIdentifiers;
-(void)meContactChangedInStore:(id)arg1 ;
-(void)setMeContactIdentifierFound:(NSString *)arg1 ;
-(NSString *)meContactIdentifierFound;
@end
