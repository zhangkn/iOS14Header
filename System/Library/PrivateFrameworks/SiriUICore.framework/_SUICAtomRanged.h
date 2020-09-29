/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <SiriUICore/SiriUICore-Structs.h>
@class NSString;

@interface _SUICAtomRanged : NSObject {

	NSString* _replacementText;
	NSRange _editRange;

}

@property (assign,nonatomic) NSRange editRange;                       //@synthesize editRange=_editRange - In the implementation block
@property (nonatomic,retain) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(NSRange)editRange;
-(BOOL)isEqual:(id)arg1 ;
-(void)setReplacementText:(NSString *)arg1 ;
-(id)initWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(NSString *)replacementText;
-(void)setEditRange:(NSRange)arg1 ;
-(id)description;
-(BOOL)isEqualToEditScriptAtomRanged:(id)arg1 ;
@end
