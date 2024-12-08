import XCTest
import SwiftTreeSitter
import TreeSitterCola

final class TreeSitterColaTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cola())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Cola grammar")
    }
}
