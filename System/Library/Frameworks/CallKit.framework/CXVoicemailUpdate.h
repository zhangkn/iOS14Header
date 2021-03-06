/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, CXHandle, NSDate, NSURL, NSString;

@interface CXVoicemailUpdate : NSObject <CXCopying, NSSecureCoding, NSCopying> {

	BOOL _played;
	BOOL _trashed;
	CXVoicemailUpdateHasSet _hasSet;
	NSUUID* _voicemailUUID;
	CXHandle* _sender;
	NSDate* _dateReceived;
	NSURL* _audioFileURL;
	NSUUID* _UUID;

}

@property (assign,nonatomic) CXVoicemailUpdateHasSet hasSet;              //@synthesize hasSet=_hasSet - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                                 //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * voicemailUUID;               //@synthesize voicemailUUID=_voicemailUUID - In the implementation block
@property (nonatomic,copy) CXHandle * sender;                             //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSDate * dateReceived;                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,copy) NSURL * audioFileURL;                          //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                 //@synthesize played=_played - In the implementation block
@property (assign,getter=isTrashed,nonatomic) BOOL trashed;               //@synthesize trashed=_trashed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(CXHandle *)sender;
-(NSDate *)dateReceived;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSender:(CXHandle *)arg1 ;
-(BOOL)isPlayed;
-(NSUUID *)UUID;
-(CXVoicemailUpdateHasSet)hasSet;
-(void)setDateReceived:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTrashed:(BOOL)arg1 ;
-(BOOL)isTrashed;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(NSString *)description;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(NSURL *)audioFileURL;
-(id)initWithVoicemailUUID:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(NSUUID *)voicemailUUID;
-(void)setHasSet:(CXVoicemailUpdateHasSet)arg1 ;
@end

