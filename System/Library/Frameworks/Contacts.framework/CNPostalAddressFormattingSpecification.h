/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface CNPostalAddressFormattingSpecification : NSObject {

	NSArray* _displayFieldArrangement;
	NSArray* _editingFieldArrangement;
	NSDictionary* _fieldLabelMap;

}

@property (nonatomic,readonly) NSDictionary * fieldLabelMap;                   //@synthesize fieldLabelMap=_fieldLabelMap - In the implementation block
@property (nonatomic,readonly) NSArray * displayFieldArrangement;              //@synthesize displayFieldArrangement=_displayFieldArrangement - In the implementation block
@property (nonatomic,readonly) NSArray * editingFieldArrangement;              //@synthesize editingFieldArrangement=_editingFieldArrangement - In the implementation block
-(NSArray *)displayFieldArrangement;
-(id)initWithDisplayFieldArrangement:(id)arg1 editingFieldArrangement:(id)arg2 fieldLabelMap:(id)arg3 ;
-(NSArray *)editingFieldArrangement;
-(NSDictionary *)fieldLabelMap;
-(id)localizedPlaceholderForKey:(id)arg1 ;
@end

