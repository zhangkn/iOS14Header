/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactRelationLocalizationProvider.h>

@protocol CNContactRelationLocalizationProvider <NSObject>
@required
+(id)preferredLanguages;
+(id)supplementalLabelURLPairsForLanguages:(id)arg1;

@end


@class NSString;

@interface CNContactRelationLocalizationProvider : NSObject <CNContactRelationLocalizationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferredLanguages;
+(id)supplementalLabelURLPairsForLanguages:(id)arg1 ;
@end

