//
// Wire
// Copyright (C) 2018 Wire Swiss GmbH
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see http://www.gnu.org/licenses/.
//

import Foundation

@objc public protocol ServiceUser: class, ZMBareUser {
    var providerIdentifier: String? { get }
    var serviceIdentifier: String? { get }
}

@objc public protocol ServiceUserChecker: ServiceUser {
    var serviceUser: ServiceUser? { get }
}

public extension ServiceUserChecker {
//    public var serviceUser: ServiceUser? {
//        guard let _ = serviceIdentifier , let _ = providerIdentifier else {
//            return nil
//        }
//
//        return self
//    }
}