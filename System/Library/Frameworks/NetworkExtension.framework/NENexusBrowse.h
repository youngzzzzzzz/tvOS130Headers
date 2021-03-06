/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWBrowseDescriptor, NWParameters, NSUUID;

@interface NENexusBrowse : NSObject {

	NWBrowseDescriptor* _descriptor;
	NWParameters* _parameters;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NWBrowseDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) NWParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSUUID * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(NWParameters *)parameters;
-(NWBrowseDescriptor *)descriptor;
-(NSUUID *)clientIdentifier;
-(void)setDescriptor:(NWBrowseDescriptor *)arg1 ;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(void)setParameters:(NWParameters *)arg1 ;
@end

