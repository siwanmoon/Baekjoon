import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.assertEquals;

class TestcodeTest {
    @Test
    @DisplayName("add test")
    void testAdd() {
        assertEquals(8, Testcode.add(5,3));
        assertEquals(0, Testcode.add(1, -1));
    }

    @Test
    @DisplayName("sub test")
    void testSub() {
        assertEquals(8, Testcode.sub(19, 11));
    }
}
