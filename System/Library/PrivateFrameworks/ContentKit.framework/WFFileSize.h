/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString;

@interface WFFileSize : NSObject <NSSecureCoding, NSCopying, WFSerializableContent, WFNaming> {

	long long _byteCount;

}

@property (nonatomic,readonly) long long byteCount;                     //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,readonly) NSString * formattedString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)wfName;
-(long long)compare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)byteCount;
-(unsigned long long)hash;
-(NSString *)formattedString;
-(id)initWithByteCount:(long long)arg1 ;
-(id)wfSerializedRepresentation;
@end

