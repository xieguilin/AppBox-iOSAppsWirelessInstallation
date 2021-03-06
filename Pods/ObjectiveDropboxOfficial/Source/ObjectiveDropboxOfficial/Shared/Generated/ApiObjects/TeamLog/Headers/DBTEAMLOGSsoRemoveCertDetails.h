///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSsoRemoveCertDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SsoRemoveCertDetails` struct.
///
/// Removed X.509 certificate for SSO.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSsoRemoveCertDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SsoRemoveCertDetails` struct.
///
@interface DBTEAMLOGSsoRemoveCertDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSsoRemoveCertDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSsoRemoveCertDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoRemoveCertDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSsoRemoveCertDetails *)instance;

///
/// Deserializes `DBTEAMLOGSsoRemoveCertDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSsoRemoveCertDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSsoRemoveCertDetails` object.
///
+ (DBTEAMLOGSsoRemoveCertDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
