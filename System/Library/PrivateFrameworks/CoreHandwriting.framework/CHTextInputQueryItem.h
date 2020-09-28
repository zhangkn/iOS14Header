/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSArray, CHTextCorrectionResult;

@interface CHTextInputQueryItem : NSObject {

	NSNumber* _itemIdentifier;
	NSNumber* _itemStableIdentifier;
	NSArray* _strokeIdentifiers;
	CHTextCorrectionResult* _correctionResult;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * itemStableIdentifier;                        //@synthesize itemStableIdentifier=_itemStableIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * strokeIdentifiers;                       //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) CHTextCorrectionResult * correctionResult;              //@synthesize correctionResult=_correctionResult - In the implementation block
-(NSNumber *)itemIdentifier;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)strokeIdentifiers;
-(NSNumber *)itemStableIdentifier;
-(CHTextCorrectionResult *)correctionResult;
-(id)initWithIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 correctionResult:(id)arg4 ;
-(BOOL)isEqualToTextInputQueryItem:(id)arg1 ;
@end
